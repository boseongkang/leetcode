# leetcode using C++  
test

## 1. Settings - SSH and GPG keys - New SSH key

## 2. Generate ssh key

### code :
### find existing ssh file
### ls -al ~/.ssh 
### ed25519 must be same, no change
### ssh-keygen -t ed25519 -C "user@email.com"
### enter x 3
### cat ~/.ssh/id_ed25519.pub
### copy paste ssh-ed25519 ~ to 'New SSH key' section

## 3. Generate token

## Settings - <>Developer settings - Personal access tokens - Tokens(classic)
## Generate new token - clasic 
## Select 'repo', 'admin:repo_hook', 'delete_repo' but its optional
## Generate token - paste in to terminal after 'git push -u'
