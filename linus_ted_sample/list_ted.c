/* The mind behind Linux | Linux Torvalds */
/* センスの悪いコード */
remove_list_entry(entry)
{
  prev = NULL;
  walk = head;

  while(walk != entry)
  {
    prev = walk;
    walk = walk->next;
  }

  /* 特殊条件でコードが分かれている。*/

  if(!prev)
    head = entry->next;
  else
    prev->next = entry->next;
}

/* Linuxが考える良いコード */
remove_list_entry(entry)
{
  indirect = &head;

  while((*indirect) != entry)
    indirect = &(*indirect)->next;

  /* 特殊条件による違いがない。*/

  *indirect = entry
}



