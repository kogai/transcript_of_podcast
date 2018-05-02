#! /bin/bash
eval "$(ssh-agent -s)"
ssh-add /app/secrets/.ssh/id_rsa

node src/Main.bs.js

git config --global user.email "kogai0121@gmail.com"
git config --global user.name "Auto updater"
git checkout -b update/$(date -I)
git add audio/
git commit -m ":robot: Add new episode"
git push

node src/GitHub.bs.js
