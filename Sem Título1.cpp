for(p= 0; p < c; p++)
	{
        if(strcmp(pessoas[c].nome, pessoas[p].nome) < 0) 
		{
		strcpy(comp, pessoas[c].nome);
		strcpy(pessoas[c].nome, pessoas[p].nome);
		strcpy(pessoas[p].nome, comp);
		{
           printf("\n%s - %s - %s - %s", pessoas[p].nome, pessoas[p].end, pessoas[p].email, pessoas[p].tel);
        	}
		
	}
		
		}'''
