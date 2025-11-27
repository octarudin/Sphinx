# Configuration file for the Sphinx documentation builder.
#
# For the full list of built-in configuration values, see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Project information -----------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#project-information

project = 'Test-Project-2'
copyright = '2025, Mahendra'
author = 'Mahendra'
release = '1.0'

# -- General configuration ---------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#general-configuration

extensions = ['sphinx_rtd_theme', 'sphinx_copybutton', 'sphinx_code_tabs']
templates_path = ['_templates']
exclude_patterns = []



# -- Options for HTML output -------------------------------------------------
# https://www.sphinx-doc.org/en/master/usage/configuration.html#options-for-html-output
import sphinx_rtd_theme

# html_theme = 'alabaster'
html_theme = 'sphinx_rtd_theme'
html_static_path = ['_static']
# html_css_files = [
#     'css/customWidth.css',
# ]

def setup(app):
    app.add_css_file("css/customWidth.css")
