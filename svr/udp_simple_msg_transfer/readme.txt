1. udp_svr.c 와 udp_cli.c를 gcc 또는 (arm용 gcc)로 빌드
   svr, svr_arm,  cli, cli_arm

2. host에서 svr을 백그라운드 실행
	ubuntu$ ./svr &

3. Target 에서 cli로 서버에 연결
	m2$ ./cli_arm 192.168.100.173
	[input_msg] 전달할 메세지 입력(영문만 가능)
	
4. host에서 돌고있는 svr 프로그램이 수신한 메세지 출력

* Target에서 ./svr_arm &  실행하여 서버 실행하여 놓고
  Host에서 ./cli 192.168.10.174  접속하여 메세지 전송 테스트
  
* 소스파일 분석하여 필요에 따라 변경하여 사용