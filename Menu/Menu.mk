##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Menu
ConfigurationName      :=Release
WorkspacePath          :="C:/Users/Erno's Laptop/Documents/tutoc++"
ProjectPath            :="C:/Users/Erno's Laptop/Documents/tutoc++/Menu"
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Erno's Laptop
Date                   :=28/02/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
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
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Menu.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Singe.cpp$(ObjectSuffix) $(IntermediateDirectory)/Animal.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Rhinoceros.cpp$(ObjectSuffix) $(IntermediateDirectory)/Tigre.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Singe.cpp$(ObjectSuffix): Singe.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Singe.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Singe.cpp$(DependSuffix) -MM Singe.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Erno's Laptop/Documents/tutoc++/Menu/Singe.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Singe.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Singe.cpp$(PreprocessSuffix): Singe.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Singe.cpp$(PreprocessSuffix) Singe.cpp

$(IntermediateDirectory)/Animal.cpp$(ObjectSuffix): Animal.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Animal.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Animal.cpp$(DependSuffix) -MM Animal.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Erno's Laptop/Documents/tutoc++/Menu/Animal.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Animal.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Animal.cpp$(PreprocessSuffix): Animal.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Animal.cpp$(PreprocessSuffix) Animal.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Erno's Laptop/Documents/tutoc++/Menu/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Rhinoceros.cpp$(ObjectSuffix): Rhinoceros.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Rhinoceros.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Rhinoceros.cpp$(DependSuffix) -MM Rhinoceros.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Erno's Laptop/Documents/tutoc++/Menu/Rhinoceros.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Rhinoceros.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Rhinoceros.cpp$(PreprocessSuffix): Rhinoceros.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Rhinoceros.cpp$(PreprocessSuffix) Rhinoceros.cpp

$(IntermediateDirectory)/Tigre.cpp$(ObjectSuffix): Tigre.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Tigre.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Tigre.cpp$(DependSuffix) -MM Tigre.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Erno's Laptop/Documents/tutoc++/Menu/Tigre.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Tigre.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Tigre.cpp$(PreprocessSuffix): Tigre.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Tigre.cpp$(PreprocessSuffix) Tigre.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


