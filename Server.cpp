//
// Created by Phylicia Melinda on 7/19/21.
//

#include "Server.hpp"

Server::Server() {
	// todo implement
}

Server::~Server() {

}

//// Setters

void Server::setServerName(const std::string& name) {
	this->_server_name = name;
}

void Server::setPortInt(int port) {
	this->_portInt = port;
}

void Server::setPort(const std::string& port) {
    this->_port = port;
}

void Server::setSocketFd(int fd) {
	this->_socketFd = fd;
}

void Server::setHost(const std::string& host) {
	this->_host = host;
}

void Server::setMaxBodySize(size_t size) {
	this->_max_body_size = size;
}

void Server::setRoot(const std::string& root) {
	this->_root = root;
}

//// Getters

std::map<int, std::string>& Server::getDefaultPages() {
return this->_default_error_page;
}

std::vector<Location>& Server::getLocations() {
	return this->_locations;
}

int Server::getPortInt() const{
	return this->_portInt;
}

int Server::getSocketFd() const{
	return this->_socketFd;
}

const std::string& Server::getPort() const
{
    return this->_port;
}

const std::string & Server::getRoot() const
{
    return this->_root;
}

const std::string & Server::getHost() const
{
    return this->_host;
}

