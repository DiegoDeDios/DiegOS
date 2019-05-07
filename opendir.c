#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>

int main(int argc, char **argv){
	char *dirName= argv[1];
	int fd,r;
	struct dirent dirKey;
	fd = open(dirName, O_RDONLY);
	r = read(fd, &dirKey, sizeof(struct dirent));
	close(fd);
	printf("El dir contiene %s %d %d \n", dirKey.d_name, (unsigned int)dirKey.d_ino, r);
	
	return 0;
}