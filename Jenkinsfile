pipeline {
    agent {
        label 'lin3' // Replace 'my-agent-label' with your specific agent's label
    }

    stages {
        stage('Clone Repository') {
            steps {
                // Clone the repository using the SSH URL and provided credentials
                // git branch: 'master', // Replace 'main' with your branch name
                //     url: 'https://github.com/sanjeevsamsani/Task-CI.git' // Use the HTTPS URL of the public repo
                script {
                    // Ensure that 'master.py' exists in the root directory (adjust path if needed)
                    sh 'git clone https://github.com/sanjeevsamsani/Task-CI.git'
                }
            }
        }
    }
}
