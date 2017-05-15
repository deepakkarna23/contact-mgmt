case 3:
					//-----------Search the Contacts-----------------
					fp=fopen("filename.txt","a+");
					system("cls");
					printf("\n=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~\n\n");
						printf("Enter name:");
						scanf("%s",&query);
						l=strlen(query);
					
					if(fp==NULL)
						printf("file does not exit");
					else{
						while(fread(&ct[2],sizeof(ct[2]),1,fp)==1)
						{
							for(i=0;i<=l;i++)
							{
								name[i]=ct[i].name[i];
								name[l]='\0';
								if(stricmp(name,query)==0)
								{
								printf("\n..::Name\t: %s\n..::Phone\t: %ld\n..::Address\t: %s\n..::Email\t:%s\n",ct[i].name,ct[i].ph_no,ct[i].address,ct[i].email);
								found++;
								if (found%4==0)
								{
								printf("..::Press any key to continue...");
								getch();
								}
								}
							}
						}
						if(found==0)
							printf("\n..::No match found!");
							else
							printf("\n..::%d match(s) found!",found);
							fclose(fp);
							printf("\n ..::Try again?\n\n\t[1] Yes\t\t[0] No\n\t");
							scanf("%d",&ch);
					}while(ch==1);
					break;
