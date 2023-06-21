#pragma once
#include <iostream>

namespace Exception
{
	class Exception
	{
		size_t line;
		std::string time;
		std::string source;
		std::string text;

	public:
		Exception(const size_t& line, const std::string& time, const std::string& source, const std::string& text)
		{
			setTriggeredLine(line);
			setTriggeredTime(time);
			setText(text);
			setSource(source);
		}

		void setTriggeredLine(const size_t& line)
		{
			this->line = line;
		}

		size_t getTriggeredLine()const { return this->line; }

		void setSource(const std::string& source)
		{
			this->source = source;
		}

		std::string getSource()const { return this->source; }

		void setTriggeredTime(const std::string & time)
		{
			this->time = time;
		}
		
		std::string getTriggeredTime() const { return this->time; }

		void setText(const std::string & text)
		{
			this->text = text;
		}

		std::string getText() const { return this->text; }

		void echo() const
		{
			std::cout << "Source: " << getSource() << std::endl;
			std::cout << "Line: " << getTriggeredLine() << std::endl;
			std::cout << "Time: " << getTriggeredTime() << std::endl;
			std::cout << "Error: " << getText() << std::endl;
		}
	};

	class DatabaseException : public Exception
	{
	public:
		DatabaseException(const size_t& line, const std::string& time, const std::string & source, const std::string& text) :
			Exception(line, time, source, text) {}
	};

	class AdminException : public Exception
	{
	public:
		AdminException(const size_t& line, const std::string& time, const std::string& source, const std::string& text) :
			Exception(line, time, source, text) {}
	};

	class ClientException : public Exception
	{
	public:
		ClientException(const size_t& line, const std::string& time, const std::string& source, const std::string& text) :
			Exception(line, time, source, text) {}
	};
}
