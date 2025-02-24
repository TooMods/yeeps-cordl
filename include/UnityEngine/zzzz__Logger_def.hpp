#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Logger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ILogHandler;
}
namespace UnityEngine {
class ILogger;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Logger;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Logger);
// Type: UnityEngine::Logger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Logger*
class CORDL_TYPE Logger : public ::System::Object {
public:
  // Declarations
  /// @brief Field <filterLogType>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__filterLogType_k__BackingField, put = __cordl_internal_set__filterLogType_k__BackingField))::UnityEngine::LogType _filterLogType_k__BackingField;

  /// @brief Field <logEnabled>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__logEnabled_k__BackingField, put = __cordl_internal_set__logEnabled_k__BackingField)) bool _logEnabled_k__BackingField;

  /// @brief Field <logHandler>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__logHandler_k__BackingField, put = __cordl_internal_set__logHandler_k__BackingField))::UnityEngine::ILogHandler* _logHandler_k__BackingField;

  __declspec(property(get = get_filterLogType, put = set_filterLogType))::UnityEngine::LogType filterLogType;

  __declspec(property(get = get_logEnabled, put = set_logEnabled)) bool logEnabled;

  __declspec(property(get = get_logHandler, put = set_logHandler))::UnityEngine::ILogHandler* logHandler;

  /// @brief Convert operator to "::UnityEngine::ILogHandler"
  constexpr operator ::UnityEngine::ILogHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ILogger"
  constexpr operator ::UnityEngine::ILogger*() noexcept;

  /// @brief Method GetString, addr 0x27e5130, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW GetString(::System::Object* message);

  /// @brief Method IsLogTypeAllowed, addr 0x27e50f4, size 0x3c, virtual true, abstract: false, final true
  inline bool IsLogTypeAllowed(::UnityEngine::LogType logType);

  /// @brief Method Log, addr 0x27e5250, size 0x174, virtual true, abstract: false, final true
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message);

  /// @brief Method Log, addr 0x27e53c4, size 0x178, virtual true, abstract: false, final true
  inline void Log(::UnityEngine::LogType logType, ::System::Object* message, ::UnityEngine::Object* context);

  /// @brief Method Log, addr 0x27e553c, size 0x1a0, virtual true, abstract: false, final true
  inline void Log(::UnityEngine::LogType logType, ::StringW tag, ::System::Object* message);

  /// @brief Method Log, addr 0x27e56dc, size 0x194, virtual true, abstract: false, final true
  inline void Log(::StringW tag, ::System::Object* message);

  /// @brief Method LogError, addr 0x27e5a04, size 0x190, virtual true, abstract: false, final true
  inline void LogError(::StringW tag, ::System::Object* message);

  /// @brief Method LogException, addr 0x27e5b94, size 0xd4, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::UnityEngine::Object* context);

  /// @brief Method LogFormat, addr 0x27e5d60, size 0x108, virtual true, abstract: false, final true
  inline void LogFormat(::UnityEngine::LogType logType, ::UnityEngine::Object* context, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogFormat, addr 0x27e5c68, size 0xf8, virtual true, abstract: false, final true
  inline void LogFormat(::UnityEngine::LogType logType, ::StringW format, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method LogWarning, addr 0x27e5870, size 0x194, virtual true, abstract: false, final true
  inline void LogWarning(::StringW tag, ::System::Object* message);

  static inline ::UnityEngine::Logger* New_ctor(::UnityEngine::ILogHandler* logHandler);

  constexpr ::UnityEngine::LogType const& __cordl_internal_get__filterLogType_k__BackingField() const;

  constexpr ::UnityEngine::LogType& __cordl_internal_get__filterLogType_k__BackingField();

  constexpr bool const& __cordl_internal_get__logEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__logEnabled_k__BackingField();

  constexpr ::UnityEngine::ILogHandler*& __cordl_internal_get__logHandler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ILogHandler*> const& __cordl_internal_get__logHandler_k__BackingField() const;

  constexpr void __cordl_internal_set__filterLogType_k__BackingField(::UnityEngine::LogType value);

  constexpr void __cordl_internal_set__logEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__logHandler_k__BackingField(::UnityEngine::ILogHandler* value);

  /// @brief Method .ctor, addr 0x27e4e30, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ILogHandler* logHandler);

  /// @brief Method get_filterLogType, addr 0x27e50e4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LogType get_filterLogType();

  /// @brief Method get_logEnabled, addr 0x27e50d0, size 0x8, virtual true, abstract: false, final true
  inline bool get_logEnabled();

  /// @brief Method get_logHandler, addr 0x27e50c0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ILogHandler* get_logHandler();

  /// @brief Convert to "::UnityEngine::ILogHandler"
  constexpr ::UnityEngine::ILogHandler* i___UnityEngine__ILogHandler() noexcept;

  /// @brief Convert to "::UnityEngine::ILogger"
  constexpr ::UnityEngine::ILogger* i___UnityEngine__ILogger() noexcept;

  /// @brief Method set_filterLogType, addr 0x27e50ec, size 0x8, virtual true, abstract: false, final true
  inline void set_filterLogType(::UnityEngine::LogType value);

  /// @brief Method set_logEnabled, addr 0x27e50d8, size 0xc, virtual true, abstract: false, final true
  inline void set_logEnabled(bool value);

  /// @brief Method set_logHandler, addr 0x27e50c8, size 0x8, virtual true, abstract: false, final true
  inline void set_logHandler(::UnityEngine::ILogHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Logger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Logger(Logger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Logger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Logger(Logger const&) = delete;

  /// @brief Field <logHandler>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ILogHandler* ____logHandler_k__BackingField;

  /// @brief Field <logEnabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____logEnabled_k__BackingField;

  /// @brief Field <filterLogType>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::LogType ____filterLogType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Logger, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Logger, ____logHandler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Logger, ____logEnabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Logger, ____filterLogType_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Logger);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Logger*, "UnityEngine", "Logger");
