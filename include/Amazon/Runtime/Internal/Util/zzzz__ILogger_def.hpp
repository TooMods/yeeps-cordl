#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILogger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class ILogger;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::ILogger);
// Type: Amazon.Runtime.Internal.Util::ILogger
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::ILogger*
class CORDL_TYPE ILogger {
public:
  // Declarations
  /// @brief Method Debug, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DebugFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DebugFormat(::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Flush, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Flush();

  /// @brief Method InfoFormat, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void InfoFormat(::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "ILogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILogger(ILogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILogger(ILogger const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::ILogger);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::ILogger*, "Amazon.Runtime.Internal.Util", "ILogger");
