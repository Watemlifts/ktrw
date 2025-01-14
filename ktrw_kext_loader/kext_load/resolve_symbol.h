//
// Project: KTRW
// Author:  Brandon Azad <bazad@google.com>
//
// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef RESOLVE_SYMBOL__H_
#define RESOLVE_SYMBOL__H_

#include <stdbool.h>
#include <stdint.h>

/*
 * load_symbol_database
 *
 * Description:
 * 	Tries to load the symbol database for this platform.
 */
bool load_symbol_database(void);

/*
 * resolve_symbol
 *
 * Description:
 * 	Resolves a symbol in the kernel image to its static (unslid) address.
 *
 * 	The appropriate database must be loaded first with load_symbol_database().
 */
uint64_t resolve_symbol(const char *symbol);

#endif
