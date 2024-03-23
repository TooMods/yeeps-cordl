#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CoreLogger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class CoreLogger;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::CoreLogger);
// Type: Unity.Services.Core.Internal::CoreLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: ::Unity.Services.Core.Internal::CoreLogger*
class CORDL_TYPE CoreLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x266a8b4, size 0x120, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message);

  /// @brief Method LogAssertion, addr 0x266ad38, size 0x124, virtual false, abstract: false, final false
  static inline void LogAssertion(::System::Object* message);

  /// @brief Method LogError, addr 0x266aaf4, size 0x120, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message);

  /// @brief Method LogException, addr 0x266ac14, size 0x124, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception);

  /// @brief Method LogTelemetry, addr 0x266af7c, size 0x120, virtual false, abstract: false, final false
  static inline void LogTelemetry(::System::Object* message);

  /// @brief Method LogVerbose, addr 0x266ae5c, size 0x120, virtual false, abstract: false, final false
  static inline void LogVerbose(::System::Object* message);

  /// @brief Method LogWarning, addr 0x266a9d4, size 0x120, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreLogger(CoreLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreLogger(CoreLogger const&) = delete;

  /// @brief Field Tag offset 0xffffffff size 0x8
  static constexpr ::ConstString Tag{ u"[ServicesCore]" };

  /// @brief Field VerboseLoggingDefine offset 0xffffffff size 0x8
  static constexpr ::ConstString VerboseLoggingDefine{ u"ENABLE_UNITY_SERVICES_CORE_VERBOSE_LOGGING" };

  /// @brief Field k_TelemetryLoggingDefine offset 0xffffffff size 0x8
  static constexpr ::ConstString k_TelemetryLoggingDefine{ u"ENABLE_UNITY_SERVICES_CORE_TELEMETRY_LOGGING" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::CoreLogger, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::CoreLogger);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::CoreLogger*, "Unity.Services.Core.Internal", "CoreLogger");
