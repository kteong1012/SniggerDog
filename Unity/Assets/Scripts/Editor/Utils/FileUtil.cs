using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace SniggerDog.Editor
{
    public static class FileUtil
    {
        public static DirectoryInfo EnsureDirectory(string path)
        {
            var dirInfo = new DirectoryInfo(path);
            if (!dirInfo.Exists)
            {
                dirInfo.Create();
            }
            return dirInfo;
        }

        public static DirectoryInfo EnsureDirectory(DirectoryInfo dirInfo)
        {
            return EnsureDirectory(dirInfo.FullName);
        }

        public static FileInfo WriteFileSafely(string path, byte[] bytes)
        {
            var fileInfo = new FileInfo(path);
            if (!fileInfo.Directory.Exists)
            {
                fileInfo.Directory.Create();
            }
            File.WriteAllBytes(fileInfo.FullName, bytes);
            return fileInfo;
        }
        public static FileInfo WriteFileSafely(string path, string content)
        {
            var fileInfo = new FileInfo(path);
            if (!fileInfo.Directory.Exists)
            {
                fileInfo.Directory.Create();
            }
            File.WriteAllText(fileInfo.FullName, content);
            return fileInfo;
        }
        public static void CopySafely(string from, string to, bool overwrite = false)
        {
            var fileInfo = new FileInfo(to);
            if (!fileInfo.Directory.Exists)
            {
                fileInfo.Directory.Create();
            }
            File.Copy(from, to, overwrite);
        }
    }
}