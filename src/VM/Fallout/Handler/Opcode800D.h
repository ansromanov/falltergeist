#pragma once

#include "../../../VM/Fallout/IOpcode.h"

namespace Falltergeist
{
    namespace VM
    {
        namespace Fallout
        {
            namespace Handler
            {
                class Opcode800D : virtual public IOpcode
                {
                    public:
                        Opcode800D() = default;
                        void applyTo(std::shared_ptr<IContext>& context) override;
                        int number() override;
                        std::string name() override;
                        std::string notes() override;
                };
            }
        }
    }
}