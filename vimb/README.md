#vimb Config
This is the configuration file I use for vimb.
Note: I also use tabbed, and I have the following alias in my bashrc:

this alias is a bit odd, but I had some trouble with Xembed for vimb
this is a hackish work around:

```bash
alias vimb='echo "vimb -c /path/to/vimbrc -e $(tabbed -c -d) & exit" | /bin/sh'
```
