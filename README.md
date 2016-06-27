## iOS10-Runtime-Headers

### Developer Preview 1

Export Method

1. Cloning RuntimeBrowser and run on iOS version to the [real machine](https://github.com/nst/RuntimeBrowser/)

2.iOS OCRuntime App in> Frameworks tab> Load All

3. displays an IP address (GCDWebServer of IP) in the About the application, on the same network segment as Mac browser to input various frameworks of API

4. The terminal uses `wget -r http://192.168.1.102:10000/tree/` be downloaded to the local

Because many files occasionally cause app flash back, in order to set up full each folder, such as a number of retries 50 times

`wget -r -t50 http://192.168.1.102:10000/tree/`

When APP flash back when running retry 50 times during the APP to continue downloading

5. Wait for all files can be downloaded

```
FINISHED --2016-06-14 20: 22: 32--

Total wall clock time: 27m 54s

Downloaded: 42401 files, 444M in 3m 18s (2.24 MB / s)

Jakey-Pro: iOS10-Runtime-Headers jakey $
```
Install wget

wget use brew install wget to install and use

translated by translate.google.com
