#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILogMessage)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime {
class ILogMessage;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::ILogMessage);
// Type: Amazon.Runtime::ILogMessage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::ILogMessage*
class CORDL_TYPE ILogMessage {
public:
  // Declarations
  __declspec(property(get = get_Args))::ArrayW<::System::Object*, ::Array<::System::Object*>*> Args;

  __declspec(property(get = get_Format))::StringW Format;

  __declspec(property(get = get_Provider))::System::IFormatProvider* Provider;

  /// @brief Method get_Args, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> get_Args();

  /// @brief Method get_Format, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Format();

  /// @brief Method get_Provider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::IFormatProvider* get_Provider();

  // Ctor Parameters [CppParam { name: "", ty: "ILogMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILogMessage(ILogMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILogMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILogMessage(ILogMessage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::ILogMessage);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::ILogMessage*, "Amazon.Runtime", "ILogMessage");
