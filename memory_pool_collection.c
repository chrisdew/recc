/*
	Copyright 2015 Robert Elder Software Inc.  All rights reserved.

	This software is not currently available under any license, and unauthorized use
	or copying is not permitted.

	This software will likely be available under a common open source license in the
	near future.  Licensing is currently pending feedback from a lawyer.  If you have
	an opinion on this subject you can send it to recc [at] robertelder.org.

	This program comes with ABSOLUTELY NO WARRANTY.  In no event shall Robert Elder
	Software Inc. be liable for incidental or consequential damages in connection with
	use of this software.
*/

#include "memory_pool_collection.h"

void memory_pool_collection_create(struct memory_pool_collection * m){
	m->struct_c_lexer_token_pool = malloc(sizeof(struct struct_c_lexer_token_memory_pool));
	m->struct_parser_node_pool = malloc(sizeof(struct struct_parser_node_memory_pool));
	m->struct_build_script_lexer_token_pool = malloc(sizeof(struct struct_build_script_lexer_token_memory_pool));
	m->struct_asm_lexer_token_pool = malloc(sizeof(struct struct_asm_lexer_token_memory_pool));
	m->struct_type_description_pool = malloc(sizeof(struct struct_asm_lexer_token_memory_pool));
	m->struct_asm_instruction_pool = malloc(sizeof(struct struct_asm_instruction_memory_pool));
	m->struct_linker_symbol_pool = malloc(sizeof(struct struct_linker_symbol_memory_pool));
	m->heap_pool = malloc(sizeof(struct heap_memory_pool));
	struct_c_lexer_token_memory_pool_create(m->struct_c_lexer_token_pool);
	struct_parser_node_memory_pool_create(m->struct_parser_node_pool);
	struct_build_script_lexer_token_memory_pool_create(m->struct_build_script_lexer_token_pool);
	struct_asm_lexer_token_memory_pool_create(m->struct_asm_lexer_token_pool);
	struct_type_description_memory_pool_create(m->struct_type_description_pool);
	struct_asm_instruction_memory_pool_create(m->struct_asm_instruction_pool);
	struct_linker_symbol_memory_pool_create(m->struct_linker_symbol_pool);
	heap_memory_pool_create(m->heap_pool);
}

void memory_pool_collection_destroy(struct memory_pool_collection * m){
	struct_c_lexer_token_memory_pool_destroy(m->struct_c_lexer_token_pool);
	struct_parser_node_memory_pool_destroy(m->struct_parser_node_pool);
	struct_build_script_lexer_token_memory_pool_destroy(m->struct_build_script_lexer_token_pool);
	struct_asm_lexer_token_memory_pool_destroy(m->struct_asm_lexer_token_pool);
	struct_type_description_memory_pool_destroy(m->struct_type_description_pool);
	struct_linker_symbol_memory_pool_destroy(m->struct_linker_symbol_pool);
	struct_asm_instruction_memory_pool_destroy(m->struct_asm_instruction_pool);
	heap_memory_pool_destroy(m->heap_pool);
	free(m->struct_c_lexer_token_pool);
	free(m->struct_parser_node_pool);
	free(m->struct_build_script_lexer_token_pool);
	free(m->struct_asm_lexer_token_pool);
	free(m->struct_type_description_pool);
	free(m->struct_asm_instruction_pool);
	free(m->struct_linker_symbol_pool);
	free(m->heap_pool);
}
