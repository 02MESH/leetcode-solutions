//list1: 0 -> 1 -> 2 -> 3 -> 4 -> 5
//list2: 6 -> 7 -> 8
//a: 3, b: 4
//result: 0 -> 1 -> 2 -> 6 -> 7 -> 8 -> 5
Node* mergeInBetween(Node* list1, int a, int b, Node* list2) {
	auto list1Start = list1;

	//Reach to the beginning of the ignorance point
	int i;
	for (i = 1; a > i; i++)
		list1Start = list1Start->next;

	//Reach to the end of the ignorance point
	auto list1End = list1Start->next;
	for(int j = i; b >= j; j++)
		list1End = list1End->next;

	//Insert the beginning of the ignorance point of list1 to the start of list2
	list1Start->next = list2;

	//Insert the end of list2 to the end ignorance point of list1
	while(list2) 
		list2 = list2->next;

	list2->next = list1End;

	//Return the head of list 1
	return list1;
}

