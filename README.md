# rgbOS
ubuntu distro.


test operating system.

får kje inn input så eg har gitt opp. tar gjerne imot tips/hjelp

Build image:
```docker build buildenv -t rgbos-buildenv```

Enter build environment:
```docker run --rm -it -v %cd%:/root/env rgbos-buildenv```

Build for x86:
```make build-x86_64```

Emulate:
```qumu-system-x86_64 -cdrom dist/x86_64/kernel.iso```

Remove the build-environment image:
```docker rmi rgbos-buildenv -f```
