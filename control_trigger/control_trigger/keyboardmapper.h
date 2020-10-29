#pragma once
#include <Windows.h>
#include <map>
#include <string>

class KeyBoardMapper {
private:
	std::map<unsigned int, unsigned char> vkMap;
	std::map<std::string, unsigned int> wcMap;
public:
	KeyBoardMapper();
	void InitKeyMapper();
	BYTE GetKeyCode(unsigned int keysym);
	unsigned int ConvertKeyCode(std::string keyCode);
};