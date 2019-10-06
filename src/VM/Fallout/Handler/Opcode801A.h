#pragma once

#include "VM/Fallout/IOpcode.h"

namespace Falltergeist
{
    namespace VM
    {
        namespace Handler
        {
            class Opcode801A :  virtual public IOpcode
            {
                public:
                    Opcode801A() = default;
                    void applyTo(std::shared_ptr<IContext> context) override;
                    int number() override;
                    std::string name() override;
                    std::string notes() override;
            };
        }
    }
}