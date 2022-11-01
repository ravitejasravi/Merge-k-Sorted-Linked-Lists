# Merge-k-Sorted-Linked-Lists
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.<br>

Example 1:

  Input: lists = [[1,4,5], [1,3,4] ,[2,6]]<br>
  Output: [1, 1, 2, 3, 4, 4, 5, 6]

Explanation: The linked-lists are:

  [<br>
   1->4->5,<br>
   1->3->4,<br>
   2->6<br>
  ]

merging them into one sorted list:<br>
  1->1->2->3->4->4->5->6

Example 2:

  Input: lists = []<br>
  Output: []

Example 3:

  Input: lists = [[]]<br>
  Output: []
