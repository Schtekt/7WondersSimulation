require("vscode")
require("clean")
workspace "7WondersBuilds"
    language "C++"
    configurations{"Debug", "Release"}
    toolset "msc"
    cppdialect "C++17"
    platforms{"Win32", "Win64"}
    project "7WondersBuilds"
        kind "ConsoleApp"
        targetdir "Build/bin/%{prj.name}"
        objdir "Build/bin-int/%{prj.name}"
        files{"src/**.cpp", "src/**.h"}

        filter {"configurations:Debug", "platforms:Win32"}
            architecture "x86"
            defines { "DEBUG" }
            symbols "On"

        filter {"configurations:Release", "platforms:Win32"}
            architecture "x86"
            defines { "NDEBUG" }
            optimize "On"

        filter {"configurations:Debug", "platforms:Win64"}
            architecture "x64"
            defines { "DEBUG" }
            symbols "On"

        filter {"configurations:Release", "platforms:Win64"}
            architecture "x64"
            defines { "NDEBUG" }
            optimize "On"