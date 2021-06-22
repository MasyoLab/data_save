//==========================================================================
// �f�[�^�̏�������[data_save.hpp]
// author: MasyoLab
//==========================================================================
#include "data_save.hpp"

//==========================================================================
/**
@brief �f�[�^�̏�������
@param stdFileName [in] �t�@�C����
@param InputData [in] �ۑ�����f�[�^
*/
void data_save::save(const std::string &stdFileName, const std::vector<std::string>&InputData) noexcept(false)
{
    std::ofstream outputfile(stdFileName);

    for (auto itr = InputData.begin(); itr != InputData.end(); ++itr)
    {
        outputfile << (*itr);
        outputfile << std::endl;
    }

    outputfile.close();
}

//==========================================================================
/**
@brief �f�[�^�̏�������
@param stdFileName [in] �t�@�C����
@param InputData [in] �ۑ�����f�[�^
*/
void data_save::save(const std::string & stdFileName, const std::list<std::string>& InputData) noexcept(false)
{
    std::ofstream outputfile(stdFileName);

    for (auto itr = InputData.begin(); itr != InputData.end(); ++itr)
    {
        outputfile << (*itr);
        outputfile << std::endl;
    }

    outputfile.close();
}

//==========================================================================
/**
@brief �f�[�^�̏�������
@param stdFileName [in] �t�@�C����
@param InputData [in] �ۑ�����f�[�^
*/
void data_save::save(const std::string & stdFileName, const std::string & InputData) noexcept(false)
{
    std::ofstream outputfile(stdFileName);
    outputfile << InputData;
    outputfile.close();
}
