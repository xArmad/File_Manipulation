// Create file
class CFile
{
public:
	const char* Filename;
	int File(const char* filename, std::string content, bool closed)
	{
    		// Checks if file doesn't exists
    		if(!std::filesystem::exists(this->Filename == filename))
    		{
      			std::ofstream outfile (this->Filename = filename);
     			 outfile << content << std::endl;
      			// Checks if file is open
     			 if(outfile.is_open())
      			 {
        			std::cout << "[CFile: SUCCESS] " << filename << " file was successfly created" << std::endl;
        			// Checks file status
        			if(closed == true)
        			{
          				outfile.close();
        			} else {
	      				std::cout << "File Not Closed" << std::endl;
	      			}
    	      		}
    		} else {
      			std::cout << "[CFile: ERROR] " << filename << " already exists" << std::endl;
		}
		return *filename;
  	}
};

// Delete file
class DFile
{
public:
	const char* Filename;
	int File(const char* filename, std::string check)
	{
    		// if keyword was added
    		if(check == "DEL")
    		{
      		// use remove function to delete a file
      		if(remove(this->Filename == filename) != 0)
    		{
			std::cout << "[DFile: WARNING] Error deleting file: " << filename << std::endl;
      		} else {
        		std::cout << "[DFile: SUCCESS] File successfully deleted: " << filename << std::endl;
      		}
    	}
  	return *filename;
	}
};

// Reads file content
class RFile
{
public:
	const char* Filename;
	const std::string content;
	char File(const char* filename)
	{
    std::string content;
    // Checks if file exists
    if(std::filesystem::exists(this->Filename = filename))
    {
      std::cout << "[RFile: SUCCESS] File: " << filename << " was found!" << std::endl;
      std::ifstream readFile(filename);
      std::cout << "[RFile: SUCCESS] File Output: ";
      // Outputs file's content
      while(getline(readFile, content))
      {
        if(content.length() > 0)
        {
        std::cout << content;
        } else {
        std::cout << "[EMTPTY]" << std::endl;
        }
      }
      std::cout << std::endl;
    } else {
      std::cout << "[RFile: ERROR] Unable to locate: " << filename << std::endl;
    }
    return *filename;
  }
};

// Updates file content
class UFile
{
public:
  const char* Filename;
  char File(const char* filename, const std::string content, const bool override)
  {
    // Checks if file exists
    if(std::filesystem::exists(this->Filename = filename))
    {
      // Checks override status, to add content at the end of file
      // or override current content of file
      if(override)
      {
        std::ofstream outfile (filename);
        outfile << content << std::endl;
      } else {
        std::ofstream outfile (filename, std::ios::in | std::ios::app);
        outfile << content << std::endl;
      }
    } else {
      std::cout << "[UFile: WARNING] " << filename << " couldn't be accessed/found." << std::endl;
    }
  return *filename;
  }
};

// Editing file's location/name
class EFile
{
public:
  char File(const char* oldname, const char* newname, bool override)
  {
    // Checks if desired new file name exists && if override is turned off
    if(std::filesystem::exists(newname) && override == false)
    {
      std::cout << "[EFile: WARNING] A File with the name " << newname << " already exists, change override permission to override the file" << std::endl; 
    } else {
      // renames file if override is turned on = true
      if(rename(oldname, newname) != 0)
      {
        if(std::filesystem::exists(oldname) != 0)
        {
          std::cout << "[EFile: ERROR] " << oldname << " does not exist" << std::endl;
        } else {
        std::cout << "[EFile: WARNING] " << oldname << " could not be changed" << std::endl;
        }
      } else {
        std::cout << "[EFile: SUCCESS] File was successfully changed: " << newname << std::endl;
      }
    }
    return *newname;
  }
};
