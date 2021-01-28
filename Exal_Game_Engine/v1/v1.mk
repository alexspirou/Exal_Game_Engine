##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=v1
ConfigurationName      :=Debug
WorkspacePath          :=/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine
ProjectPath            :=/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=alex
Date                   :=28/01/21
CodeLitePath           :=/home/alex/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="v1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)SDL2 $(LibrarySwitch)SDL2_image 
ArLibs                 :=  "SDL2" "SDL2_image" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_Graphics_TextureManager.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Characters_Mage.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Levels_Stages.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Characters_Meteors.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Characters_Energy.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Core_Engine.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Graphics_TextureManager.cpp$(ObjectSuffix): src/Graphics/TextureManager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Graphics_TextureManager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Graphics_TextureManager.cpp$(DependSuffix) -MM src/Graphics/TextureManager.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1/src/Graphics/TextureManager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Graphics_TextureManager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Graphics_TextureManager.cpp$(PreprocessSuffix): src/Graphics/TextureManager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Graphics_TextureManager.cpp$(PreprocessSuffix) src/Graphics/TextureManager.cpp

$(IntermediateDirectory)/src_Characters_Mage.cpp$(ObjectSuffix): src/Characters/Mage.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Characters_Mage.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Characters_Mage.cpp$(DependSuffix) -MM src/Characters/Mage.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1/src/Characters/Mage.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Characters_Mage.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Characters_Mage.cpp$(PreprocessSuffix): src/Characters/Mage.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Characters_Mage.cpp$(PreprocessSuffix) src/Characters/Mage.cpp

$(IntermediateDirectory)/src_Levels_Stages.cpp$(ObjectSuffix): src/Levels/Stages.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Levels_Stages.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Levels_Stages.cpp$(DependSuffix) -MM src/Levels/Stages.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1/src/Levels/Stages.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Levels_Stages.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Levels_Stages.cpp$(PreprocessSuffix): src/Levels/Stages.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Levels_Stages.cpp$(PreprocessSuffix) src/Levels/Stages.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_Characters_Meteors.cpp$(ObjectSuffix): src/Characters/Meteors.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Characters_Meteors.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Characters_Meteors.cpp$(DependSuffix) -MM src/Characters/Meteors.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1/src/Characters/Meteors.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Characters_Meteors.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Characters_Meteors.cpp$(PreprocessSuffix): src/Characters/Meteors.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Characters_Meteors.cpp$(PreprocessSuffix) src/Characters/Meteors.cpp

$(IntermediateDirectory)/src_Characters_Energy.cpp$(ObjectSuffix): src/Characters/Energy.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Characters_Energy.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Characters_Energy.cpp$(DependSuffix) -MM src/Characters/Energy.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1/src/Characters/Energy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Characters_Energy.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Characters_Energy.cpp$(PreprocessSuffix): src/Characters/Energy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Characters_Energy.cpp$(PreprocessSuffix) src/Characters/Energy.cpp

$(IntermediateDirectory)/src_Core_Engine.cpp$(ObjectSuffix): src/Core/Engine.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Core_Engine.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Core_Engine.cpp$(DependSuffix) -MM src/Core/Engine.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/alex/Dropbox/Alex/Programming/Programming_Tutorials/Exal/Exal_Game_Engine/Exal_Game_Engine/v1/src/Core/Engine.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Core_Engine.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Core_Engine.cpp$(PreprocessSuffix): src/Core/Engine.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Core_Engine.cpp$(PreprocessSuffix) src/Core/Engine.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


