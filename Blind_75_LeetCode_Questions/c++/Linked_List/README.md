1. I used 'mv' to move README file into the folder
2. it moved from my labtop, but on github website it was still there
3. so I tried to delete, but i dont know how
4. so just deleted from github website and used 
5. 'git push --force origin main'

파일이 엄청 심각하게 꼬여서 싹다 지움.

왜인지 모르겠는데 지금 이 readme 파일을 'mv' 커맨드로 터미널에서 옮기고 
git add,commit,push -u 했는데 로컬인 내 터미널에선 readme 파일이 정상적으로 이동했는데
깃허브 웹사이트에는 'mv'된 위치와 'mv'하기 전 위치 두가지 위치에 파일이 존재.

'mv'했는데도 안지워진 파일을 로컬에선 안보이니 못지워서 깃허브 웹에서 edit 버튼으로 
삭제했고 이때부터 문제시작.

웹에서 삭제를 했으니 로컬과 싱크가 맞아야 하는데 당연히 안맞음.

git pull 써봐도 웹사이트에 존재하는 파일이 로컬로 딸려오진 않음(로컬에선 이미 'mv'되서 파일이 존재하지 않음, 다른 위치에 가버렸으니)

이때부터 더 큰 문제

정리.

1. Blind_75_LeetCode_Questions/Linked_List 이 디렉토리 아래 readme 파일 생성
2. readme 파일을 'mv' 커맨드로 다른 폴더로 이동(로컬에서 실행 터미널에서)
3. 로컬에선 이동되어서 git add, commit, push -u 해서 올림
4. 근데? 깃허브 웹사이트에는 그대로 1번 디렉토리 아래에 readme 파일이 존재
5. 깃허브 웹사이트에서 직접 edit에서 삭제함
6. git pull 했는데 이상 없었음
7. 1번 경로 아래에 readme파일 새로 만듬 (로컬에서)
8. git add, commit, push-u 에서 에러남 푸쉬에서, 에러명 기억 x
9. 푸쉬가 안되니 git push --force origin main 써서 강제로 푸쉬
10. 그랬더니 readme 파일에 >>>>>이랑 ======이런 내가 사용하지 않은 아이콘이 뜸
11. 챗 지피티한테 스크린샷 찍어서 원바이 원으로 제공
12. 왜인지 모르겠는데 master를 뺏긴건지 push 할때 ssh키 없어서 비번 settings,developer 머시기에서 generate 해서 붙혀넣기 해서 push함
13. 근데 갑자기 1번 폴더안에 있던 파일 및 디렉토리들이 제일 메인 디렉토리(../) 하면 가는 처음 디렉토리에 뜸(깃허브 웹사이트에만 뜨고 로컬에선 안보임)
14. 로컬에서 안보여서 git pull 했는데 문제 없었음 
15. git status 하니 빨간글씨 뜨면서 13번의 파일 및 디렉토리들이 빨간글씨로 뜸 
16. 열받아서 rm -rf 로컬폴더 하고 git clone


