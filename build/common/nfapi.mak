################################################################################
#   Copyright (c)  [MWNL]                            			               #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################

# This is makefile for NFAPI module

include ../common/rsys_fancy.mak
include ../common/env.mak
COLOR=$(COLOR_RED)

SRC_DIR=$(ROOT_DIR)/src/nfapi
C_SRCS=$(wildcard $(SRC_DIR)/*.c)
C_OBJS=$(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(C_SRCS))
# $(error TESTESTESTEST $(C_OBJS))

# prepare the list of the odu header files
# HDR_FILES+=$(wildcard $(CM_DIR)/env*.[hx])
HDR_FILES+=$(wildcard $(NFAPI_DIR)/*.[hx])



# PLTFRM_FLAGS=
# ifeq ($(NODE),TEST_STUB)
# PLTFRM_FLAGS+=-DODU_TEST_STUB
# endif

lib: $(LIB_DIR)/libnfapi.a
include $(COM_BUILD_DIR)/compile.mak

# L_OPTS=-lsysrepo -lyang
# L_OPTS+= -lsysrepo-cpp -lyang-cpp
# L_OPTS+= -lm -lpthread
# I_OPTS=-I$(ROOT_DIR)/src/o1/
# I_OPTS+=-I$(ROOT_DIR)/src/o1/ves/

#-------------------------------------------------------------#
#Linker macros
#-------------------------------------------------------------#

$(LIB_DIR)/libnfapi.a:$(C_OBJS)
		  @echo -e "Creating Archive $(COLOR) $@ $(REVERT_COLOR)"
		  $(Q)ar -cr $(LIB_DIR)/libnfapi.a $(C_OBJS)

#-------------------------------------------------------------#
#Clean macros
#-------------------------------------------------------------#
clean:
		  @echo -e "$(COLOR_RED)Cleaning NFAPI$(REVERT_COLOR)"
		  $(Q)\rm -f $(LIB_DIR)/libnfapi.a $(C_OBJS) 

#**********************************************************************
#         End of file
#**********************************************************************
