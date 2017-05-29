#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <assert.h>
#include <string.h>
#include "queue.h"

//查看更改
char * s_gets( char * st, int n );

int main()
{
	Queue line;
	Item temp;
	char ch;

	
	InitializeQueue( &line );
	puts( "Testing the Queue interface.Type a to add a value," );
	puts( "type d to delete a value, and type q to quit." );
	while ( ( ch = getchar() ) != 'q' )
	{
		if ( ch != 'a' && ch != 'd' )
		{
			continue;
		}
		if ( ch == 'a' )
		{
			printf( "Integer to add:" );
			scanf( "%d", &temp );
			if ( !QueueIsFull(&line) )
			{
				printf( "Putting %d into queue\n", temp );
				EnQueue( temp, &line );
			}
			else
			{
				puts( "Queue is Full!!!" );
			}
		}
		else
		{
			if ( QueueIsEmpty( &line ) )
			{
				puts( "Nothing to delete" );
			}
			else
			{
				DeQueue( &temp, &line );
				printf( "Removing %d from queue\n", temp );
			}
		}
		printf( "%d items in queue\n", QueueItemCount( &line ) );
		puts( "Type a to add, d to delete, q to quit:" );
	}
	EmptyTheQueue( &line );
	puts( "Bye!!" );

	return 0;
}
char * s_gets( char * st, int n )
{
	char * ret_val;
	char * find;
	ret_val = fgets( st, n, stdin );

	if ( ret_val )
	{
		find = strchr( st, '\n' );
		if ( find )
		{
			*find = '\0';
		}
		else
		{
			while ( getchar() != '\n' )
			{
				continue;
			}
		}
	}

	return ret_val;
}

//struct film * GcMemony(film *);
//struct film * GcMemony(film * head)
//{
//	int n = 0;
//
//	if (head->next != NULL)
//	{
//		printf("GC start at %d\n", n = head->data);
//		head->next = GcMemony(head->next);
//	}
//	if (head->next == NULL)
//	{
//		printf("free start at %d\n", n = head->data);
//		free(head);
//		printf("free %d end\n", n);
//		return NULL;
//	}
//}