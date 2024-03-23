#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLogger_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalConsoleLogger)
namespace Amazon::Runtime::Internal::Util {
struct __InternalConsoleLogger__LogLevel;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
struct __InternalConsoleLogger__LogLevel;
}
namespace Amazon::Runtime::Internal::Util {
class InternalConsoleLogger;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::InternalConsoleLogger);
// Type: ::LogLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::InternalConsoleLogger::LogLevel
struct CORDL_TYPE __InternalConsoleLogger__LogLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InternalConsoleLogger__LogLevel_Unwrapped
  enum struct ____InternalConsoleLogger__LogLevel_Unwrapped : int32_t {
    __E_Verbose = static_cast<int32_t>(0x2),
    __E_Debug = static_cast<int32_t>(0x3),
    __E_Info = static_cast<int32_t>(0x4),
    __E_Warn = static_cast<int32_t>(0x5),
    __E_Error = static_cast<int32_t>(0x6),
    __E_Assert = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InternalConsoleLogger__LogLevel_Unwrapped() const noexcept {
    return static_cast<____InternalConsoleLogger__LogLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InternalConsoleLogger__LogLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InternalConsoleLogger__LogLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Debug value: static_cast<int32_t>(0x3)
  static ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel const Debug;

  /// @brief Field Error value: static_cast<int32_t>(0x6)
  static ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel const Error;

  /// @brief Field Info value: static_cast<int32_t>(0x4)
  static ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel const Info;

  /// @brief Field Verbose value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel const Verbose;

  /// @brief Field Warn value: static_cast<int32_t>(0x5)
  static ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel const Warn;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Assert value: static_cast<int32_t>(0x7)
  static ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel const _cordl_Assert;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::InternalConsoleLogger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::InternalConsoleLogger*
class CORDL_TYPE InternalConsoleLogger : public ::Amazon::Runtime::Internal::Util::InternalLogger {
public:
  // Declarations
  using LogLevel = ::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel;

  /// @brief Field _sequanceId, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__sequanceId, put = setStaticF__sequanceId)) int64_t _sequanceId;

  /// @brief Method Debug, addr 0x243cd8c, size 0x94, virtual true, abstract: false, final false
  inline void Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DebugFormat, addr 0x243ce20, size 0x88, virtual true, abstract: false, final false
  inline void DebugFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method Error, addr 0x243c8a0, size 0x94, virtual true, abstract: false, final false
  inline void Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Flush, addr 0x243c89c, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method InfoFormat, addr 0x243cea8, size 0x88, virtual true, abstract: false, final false
  inline void InfoFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method Log, addr 0x243c934, size 0x458, virtual false, abstract: false, final false
  inline void Log(::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel logLevel, ::StringW message, ::System::Exception* ex);

  static inline ::Amazon::Runtime::Internal::Util::InternalConsoleLogger* New_ctor(::System::Type* declaringType);

  /// @brief Method .ctor, addr 0x243c83c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* declaringType);

  static inline int64_t getStaticF__sequanceId();

  static inline void setStaticF__sequanceId(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalConsoleLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalConsoleLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalConsoleLogger(InternalConsoleLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalConsoleLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalConsoleLogger(InternalConsoleLogger const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::InternalConsoleLogger, 0x20>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__InternalConsoleLogger__LogLevel, "Amazon.Runtime.Internal.Util", "InternalConsoleLogger/LogLevel");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::InternalConsoleLogger);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::InternalConsoleLogger*, "Amazon.Runtime.Internal.Util", "InternalConsoleLogger");
