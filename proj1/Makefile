mkdir -p bin htmlconv lib obj testbin testobj
# after directory is made, the entire all is made

all: link

link: StringUtils.o StringUtilsTest.o
  g++ -Wall -Wextra StringUtils.o StringUtilsTest.0 -o teststrutils

StringUtils.o:
  g++ -Wall -Wextra -c StringUtils.cpp -o StringUtils.o

StringUtilsTest.o:
  g++ -Wall -Wextra -c StringUtilsTest.cpp -o StringUtilsTest.o

clean:
  rm -f bin htmlconv lib testbin testobj

#All commands aare instated
