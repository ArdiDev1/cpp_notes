#include <iostream>
#include <memory>

class Project {
    std::string m_Name;
public:
    void SetName(const std::string &name) {
        m_Name = name;
    }

    void ShowProjectDetails() {
        std::cout << "[Project Name] " << m_Name << std::endl;
    }
};

class Employee{
    std::unique_ptr<Project> m_pProject{};

public:
    void SetProject(std::unique_ptr<Project> prj) {
        m_pProject = std::move(prj);
    }

    const std::unique_ptr<Project>&  GetProject()const{
        return m_pProject;
    }

    void ShowInfo(std::unique_ptr<Employee> emp) {
        std::cout << "Project Details: ";
        emp->GetProject()->ShowProjectDetails();
    }
};

int main() {
    std::unique_ptr<Project> prj {new Project};
    prj->SetName("Steven");

    prj->ShowProjectDetails();
}