pipeline {
    agent {
        label 'my-agent-label' // Replace 'my-agent-label' with your specific agent's label
    }

    stages {
        stage('Clone Repository') {
            steps {
                // Clone the repository using the SSH URL and provided credentials
                git branch: 'main', // Replace 'main' with your branch name
                    url: 'https://github.com/sanjeevsamsani/Task-CI.git' // Use the HTTPS URL of the public repo
            }
        }
    }
}
