# VMWare Win10 Kernel Debugging Environment Setup

## Configure the vmx files

- Debuggee Machine

Go to file `<debuggee-machine-name>.vmx`, right click to modify the file, delete all `serial0` and add the following lines

```
serial0.present = "TRUE"
serial0.fileType = "pipe"
serial0.yieldOnMsrRead = "TRUE"
serial0.startConnected = "TRUE"
serial0.fileName = "/tmp/kd_pipe"
```

- Debugger Machine

Go to file `<debugger-machine-name>.vmx`, right click to modify the file, delete all `serial0` and add the following lines

```
serial0.present = "TRUE"
serial0.fileType = "pipe"
serial0.yieldOnMsrRead = "TRUE"
serial0.startConnected = "TRUE"
serial0.fileName = "/tmp/kd_pipe"
serial0.pipe.endPoint = "client"
```

## Activate debug modus

- On the debuggee Machine:

run as admin to open cmd.

```
bcdedit /debug on
bcdedit /dbgsettings serial debugport:1 baudrate:115200
```

## Start the Machines

run as  admin to open `windbg`, go to COM column, port number as 1 and check the reconnect. start the debuggee machine, after it starts, debugger will be attached to it automatically.
