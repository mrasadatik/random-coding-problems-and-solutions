# Contributing Guidelines for random-coding-problems-and-solutions

I’m glad you're interested in contributing to _[random-coding-problems-and-solutions](https://github.com/mrasadatik/random-coding-problems-and-solutions.git)_! By contributing, you'll help improve this project for everyone. Please follow the steps and guidelines below to ensure smooth collaboration.

### Steps to Follow Before Contributing:

1. **Look for the Code of Conduct (CoC)**  
   Be sure to read the [Code of Conduct](CODE_OF_CONDUCT.md). It will help you understand the expected behavior while contributing.

2. **Look for the License**  
   Check the repository’s licensing terms before making any contributions. The repository is licensed under [MIT](LICENSE).

3. **Look for Security**  
   If your contribution involves any security-related changes, ensure you follow the proper disclosure procedures. You can find more details in the [Security Policy](SECURITY.md).

### Creating a New Branch:

When you create a branch for your changes, follow this format:

```
<category>/<problem>/<language>/<ticket-id>/<short-description>
```

**Mandatory Sections:**

-   **Category (<category>)**: Specifies the type of change you're making (e.g., bug, documentation, enhancement).
-   **Short Description (<short-description>)**: A concise summary of the purpose of your branch.

**Optional Sections:**

-   **Problem (<problem>)**: The name of the associated problem (if applicable).
-   **Language (<language>)**: The programming language used for the solution.
-   **Ticket ID (<ticket-id>)**: If there’s a task or issue tracker ID, include it here.

### Possible Categories:

-   bug
-   documentation
-   enhancement
-   performance
-   security
-   new-problem

### General Coding Guidelines:

-   Follow the repository’s **coding standards**.
-   Make sure your change fits into the relevant category and is clear to understand.
-   Make sure your commits are meaningful and atomic.

### Commit Structure:

Your commit messages should follow this structure:

```
<type>(<scope>): <subject>

<body>

<footer>
```

Follow **[Conventional Commits](https://www.conventionalcommits.org/en/v1.0.0)** guidelines. Here are some examples of commit types:

-   **bug**: A fix for a bug.
-   **documentation**: Updates or improvements to documentation.
-   **enhancement**: Improvements to an existing feature.
-   **performance**: Performance-related changes.
-   **security**: Fixes or improvements related to security.
-   **new-problem**: A new problem/solution introduced.

#### Commit Signatures:

Sign your commits by following the [GitHub commit signing documentation](https://docs.github.com/en/authentication/managing-commit-signature-verification).

### Pushing Changes:

After making your changes:

1. Push your changes to your forked repository.
2. Open a pull request to the main repository.

### Pull Request Template:

When submitting a pull request, follow this template:

#### Title:

-   **Format for Independent PR**: `<type>: <brief description>`
-   **Format for PR Based on an Issue**: `<type>: <brief description> (resolves #<issue-number>)`

#### Description:

-   **Type**: Bug, documentation, enhancement, performance, security, new-problem (choose one)
-   **Detailed Description**:
    -   Purpose of the changes
    -   Summary of what was done
    -   Related issues or discussions (link to any relevant issues)
    -   Any new features or breaking changes introduced
    -   Instructions for testing the changes

Before submitting, **check if there are existing related PRs** to avoid duplicating work.

### Opening an Issue:

1. Go to the **Issues** tab.
2. Select the appropriate **Issue Template** (if available).
3. Fill in the required details in the form.
4. **Check if a related issue already exists** before opening a new one.

### Thank You for Your Contribution!

Your contributions are valuable! Thanks for taking the time to improve this project. You’re helping make this repository better for everyone, and I truly appreciate it.
