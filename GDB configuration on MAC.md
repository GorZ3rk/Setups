# GDB configuration on MAC

- Use `Homebrew` to install gdb on mac

```bash
brew install gdb
```

- Create certificate for gdb

Open `Utilities` ⇒ `Keychain Access`

Under `Certificate Assistent` to `create a certificate ...`

You can name it gdb_cert and change certificate type to `code signing`, then click next, next until the Location, change it to `system`, then finish it. (If you encounter the unknow error, then create it again and set location to login, after finishing creating, drag it into System. 

- Open `gdb_cert` and change trust to `always`
- Create a file called `gdb-entitlement.xml`

```xml
<!-- gdb-entitlement.xml -->
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0">
<dict>
    <key>com.apple.security.cs.debugger</key>
    <true/>
</dict>
</plist>
```

- After all, open Terminal and input the command below

```bash
codesign --entitlements gdb-entitlement.xml -fs gdb_cert /usr/local/bin/gdb
```

- At the end, add `set startup-with-shell off` into `~/.gdbinit`

```bash
echo "set startup-with-shell off" >> ~/.gdbinit
```