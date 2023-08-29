def pytest_addoption(parser):
    parser.addoption("--conf", action="store", default="config.json", type=str, help="Path to the JSON configuration file of the TQP.", required=False)