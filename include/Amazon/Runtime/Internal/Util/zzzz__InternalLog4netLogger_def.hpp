#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLog4netLogger_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__InternalLogger_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalLog4netLogger)
namespace Amazon::Runtime::Internal::Util {
struct __InternalLog4netLogger__LoadState;
}
namespace Amazon::Util::Internal {
class ITypeInfo;
}
namespace System::Reflection {
class MethodInfo;
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
struct __InternalLog4netLogger__LoadState;
}
namespace Amazon::Runtime::Internal::Util {
class InternalLog4netLogger;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::InternalLog4netLogger);
// Type: ::LoadState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: true
// CS Name: ::InternalLog4netLogger::LoadState
struct CORDL_TYPE __InternalLog4netLogger__LoadState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InternalLog4netLogger__LoadState_Unwrapped
  enum struct ____InternalLog4netLogger__LoadState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_Failed = static_cast<int32_t>(0x1),
    __E_Loading = static_cast<int32_t>(0x2),
    __E_Success = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InternalLog4netLogger__LoadState_Unwrapped() const noexcept {
    return static_cast<____InternalLog4netLogger__LoadState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InternalLog4netLogger__LoadState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InternalLog4netLogger__LoadState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Failed value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState const Failed;

  /// @brief Field Loading value: static_cast<int32_t>(0x2)
  static ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState const Loading;

  /// @brief Field Success value: static_cast<int32_t>(0x3)
  static ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState const Success;

  /// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState const Uninitialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
// Type: Amazon.Runtime.Internal.Util::InternalLog4netLogger
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 46, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::InternalLog4netLogger*
class CORDL_TYPE InternalLog4netLogger : public ::Amazon::Runtime::Internal::Util::InternalLogger {
public:
  // Declarations
  using LoadState = ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState;

  __declspec(property(get = get_IsDebugEnabled)) bool IsDebugEnabled;

  __declspec(property(get = get_IsErrorEnabled)) bool IsErrorEnabled;

  __declspec(property(get = get_IsInfoEnabled)) bool IsInfoEnabled;

  /// @brief Field LOCK, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LOCK, put = setStaticF_LOCK))::System::Object* LOCK;

  /// @brief Field debugLevelPropertyValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_debugLevelPropertyValue, put = setStaticF_debugLevelPropertyValue))::System::Object* debugLevelPropertyValue;

  /// @brief Field errorLevelPropertyValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_errorLevelPropertyValue, put = setStaticF_errorLevelPropertyValue))::System::Object* errorLevelPropertyValue;

  /// @brief Field getLoggerWithTypeMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_getLoggerWithTypeMethod, put = setStaticF_getLoggerWithTypeMethod))::System::Reflection::MethodInfo* getLoggerWithTypeMethod;

  /// @brief Field infoLevelPropertyValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_infoLevelPropertyValue, put = setStaticF_infoLevelPropertyValue))::System::Object* infoLevelPropertyValue;

  /// @brief Field internalLogger, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_internalLogger, put = __cordl_internal_set_internalLogger))::System::Object* internalLogger;

  /// @brief Field isDebugEnabled, offset 0x2a, size 0x2
  __declspec(property(get = __cordl_internal_get_isDebugEnabled, put = __cordl_internal_set_isDebugEnabled))::System::Nullable_1<bool> isDebugEnabled;

  /// @brief Field isEnabledForMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_isEnabledForMethod, put = setStaticF_isEnabledForMethod))::System::Reflection::MethodInfo* isEnabledForMethod;

  /// @brief Field isErrorEnabled, offset 0x28, size 0x2
  __declspec(property(get = __cordl_internal_get_isErrorEnabled, put = __cordl_internal_set_isErrorEnabled))::System::Nullable_1<bool> isErrorEnabled;

  /// @brief Field isInfoEnabled, offset 0x2c, size 0x2
  __declspec(property(get = __cordl_internal_get_isInfoEnabled, put = __cordl_internal_set_isInfoEnabled))::System::Nullable_1<bool> isInfoEnabled;

  /// @brief Field levelType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_levelType, put = setStaticF_levelType))::System::Type* levelType;

  /// @brief Field levelTypeInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_levelTypeInfo, put = setStaticF_levelTypeInfo))::Amazon::Util::Internal::ITypeInfo* levelTypeInfo;

  /// @brief Field loadState, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_loadState, put = setStaticF_loadState))::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState loadState;

  /// @brief Field logMangerType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_logMangerType, put = setStaticF_logMangerType))::System::Type* logMangerType;

  /// @brief Field logMangerTypeInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_logMangerTypeInfo, put = setStaticF_logMangerTypeInfo))::Amazon::Util::Internal::ITypeInfo* logMangerTypeInfo;

  /// @brief Field logMethod, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_logMethod, put = setStaticF_logMethod))::System::Reflection::MethodInfo* logMethod;

  /// @brief Field logType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_logType, put = setStaticF_logType))::System::Type* logType;

  /// @brief Field logTypeInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_logTypeInfo, put = setStaticF_logTypeInfo))::Amazon::Util::Internal::ITypeInfo* logTypeInfo;

  /// @brief Field loggerType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_loggerType, put = setStaticF_loggerType))::System::Type* loggerType;

  /// @brief Field systemStringFormatType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_systemStringFormatType, put = setStaticF_systemStringFormatType))::System::Type* systemStringFormatType;

  /// @brief Method Debug, addr 0x24400f4, size 0x1ec, virtual true, abstract: false, final false
  inline void Debug(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method DebugFormat, addr 0x24402e0, size 0x1b8, virtual true, abstract: false, final false
  inline void DebugFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  /// @brief Method Error, addr 0x243fc38, size 0x1ec, virtual true, abstract: false, final false
  inline void Error(::System::Exception* exception, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method Flush, addr 0x243f964, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method InfoFormat, addr 0x2440768, size 0x1b8, virtual true, abstract: false, final false
  inline void InfoFormat(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> arguments);

  static inline ::Amazon::Runtime::Internal::Util::InternalLog4netLogger* New_ctor(::System::Type* declaringType);

  constexpr ::System::Object*& __cordl_internal_get_internalLogger();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_internalLogger() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_isDebugEnabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_isDebugEnabled();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_isErrorEnabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_isErrorEnabled();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_isInfoEnabled() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_isInfoEnabled();

  constexpr void __cordl_internal_set_internalLogger(::System::Object* value);

  constexpr void __cordl_internal_set_isDebugEnabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_isErrorEnabled(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_isInfoEnabled(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x243d298, size 0x264, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* declaringType);

  static inline ::System::Object* getStaticF_LOCK();

  static inline ::System::Object* getStaticF_debugLevelPropertyValue();

  static inline ::System::Object* getStaticF_errorLevelPropertyValue();

  static inline ::System::Reflection::MethodInfo* getStaticF_getLoggerWithTypeMethod();

  static inline ::System::Object* getStaticF_infoLevelPropertyValue();

  static inline ::System::Reflection::MethodInfo* getStaticF_isEnabledForMethod();

  static inline ::System::Type* getStaticF_levelType();

  static inline ::Amazon::Util::Internal::ITypeInfo* getStaticF_levelTypeInfo();

  static inline ::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState getStaticF_loadState();

  static inline ::System::Type* getStaticF_logMangerType();

  static inline ::Amazon::Util::Internal::ITypeInfo* getStaticF_logMangerTypeInfo();

  static inline ::System::Reflection::MethodInfo* getStaticF_logMethod();

  static inline ::System::Type* getStaticF_logType();

  static inline ::Amazon::Util::Internal::ITypeInfo* getStaticF_logTypeInfo();

  static inline ::System::Type* getStaticF_loggerType();

  static inline ::System::Type* getStaticF_systemStringFormatType();

  /// @brief Method get_IsDebugEnabled, addr 0x243fe24, size 0x2d0, virtual true, abstract: false, final false
  inline bool get_IsDebugEnabled();

  /// @brief Method get_IsErrorEnabled, addr 0x243f968, size 0x2d0, virtual true, abstract: false, final false
  inline bool get_IsErrorEnabled();

  /// @brief Method get_IsInfoEnabled, addr 0x2440498, size 0x2d0, virtual true, abstract: false, final false
  inline bool get_IsInfoEnabled();

  /// @brief Method loadStatics, addr 0x243eb0c, size 0xe58, virtual false, abstract: false, final false
  static inline void loadStatics();

  static inline void setStaticF_LOCK(::System::Object* value);

  static inline void setStaticF_debugLevelPropertyValue(::System::Object* value);

  static inline void setStaticF_errorLevelPropertyValue(::System::Object* value);

  static inline void setStaticF_getLoggerWithTypeMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_infoLevelPropertyValue(::System::Object* value);

  static inline void setStaticF_isEnabledForMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_levelType(::System::Type* value);

  static inline void setStaticF_levelTypeInfo(::Amazon::Util::Internal::ITypeInfo* value);

  static inline void setStaticF_loadState(::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState value);

  static inline void setStaticF_logMangerType(::System::Type* value);

  static inline void setStaticF_logMangerTypeInfo(::Amazon::Util::Internal::ITypeInfo* value);

  static inline void setStaticF_logMethod(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_logType(::System::Type* value);

  static inline void setStaticF_logTypeInfo(::Amazon::Util::Internal::ITypeInfo* value);

  static inline void setStaticF_loggerType(::System::Type* value);

  static inline void setStaticF_systemStringFormatType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalLog4netLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalLog4netLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalLog4netLogger(InternalLog4netLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalLog4netLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalLog4netLogger(InternalLog4netLogger const&) = delete;

  /// @brief Field internalLogger, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___internalLogger;

  /// @brief Field isErrorEnabled, offset: 0x28, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___isErrorEnabled;

  /// @brief Field isDebugEnabled, offset: 0x2a, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___isDebugEnabled;

  /// @brief Field isInfoEnabled, offset: 0x2c, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___isInfoEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::InternalLog4netLogger, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalLog4netLogger, ___internalLogger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalLog4netLogger, ___isErrorEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalLog4netLogger, ___isDebugEnabled) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::InternalLog4netLogger, ___isInfoEnabled) == 0x2c, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::__InternalLog4netLogger__LoadState, "Amazon.Runtime.Internal.Util", "InternalLog4netLogger/LoadState");
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::InternalLog4netLogger);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::InternalLog4netLogger*, "Amazon.Runtime.Internal.Util", "InternalLog4netLogger");
