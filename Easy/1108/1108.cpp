//My solution
std::string defangIPaddr(std::string address) {
	std::string result;
	for (int i = 0; address.size() > i; i++) {
		if (address[i] == '.') 
			result += "[.]";
		else
			result += address[i];
	}
	return result;
}
