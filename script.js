document.addEventListener('DOMContentLoaded', () => {
  const editableDiv = document.getElementById('editableDiv');

  // Load saved content from localStorage
  const savedContent = localStorage.getItem('editableContent');
  if (savedContent) {
    editableDiv.innerHTML = savedContent;
  }

  document.getElementById('boldButton').addEventListener('click', () => {
    document.execCommand('bold');
    saveContent();
  });

  // Save content to localStorage on content change
  editableDiv.addEventListener('input', saveContent);

  function saveContent() {
    editableDiv = document.getElementById('editableDiv');
    localStorage.setItem('editableContent', editableDiv.innerHTML);
  }
  saveContent();
});
