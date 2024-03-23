#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VivoxLogger)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxLogger;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxLogger);
// Type: Unity.Services.Vivox::VivoxLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxLogger*
class CORDL_TYPE VivoxLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Method Log, addr 0x1c183bc, size 0x120, virtual false, abstract: false, final false
  static inline void Log(::System::Object* message);

  /// @brief Method LogAssertion, addr 0x1c186a8, size 0x124, virtual false, abstract: false, final false
  static inline void LogAssertion(::System::Object* message);

  /// @brief Method LogError, addr 0x1c184dc, size 0x120, virtual false, abstract: false, final false
  static inline void LogError(::System::Object* message);

  /// @brief Method LogException, addr 0x1c167d8, size 0x124, virtual false, abstract: false, final false
  static inline void LogException(::System::Exception* exception);

  /// @brief Method LogVerbose, addr 0x1c187cc, size 0x120, virtual false, abstract: false, final false
  static inline void LogVerbose(::System::Object* message);

  /// @brief Method LogVxException, addr 0x1c185fc, size 0xac, virtual false, abstract: false, final false
  static inline void LogVxException(::System::Object* message);

  /// @brief Method LogWarning, addr 0x1c16d0c, size 0x120, virtual false, abstract: false, final false
  static inline void LogWarning(::System::Object* message);

  static inline ::Unity::Services::Vivox::VivoxLogger* New_ctor();

  /// @brief Method .ctor, addr 0x1c188ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxLogger(VivoxLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxLogger(VivoxLogger const&) = delete;

  /// @brief Field k_Tag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Tag{ u"[Vivox]" };

  /// @brief Field k_VerboseLoggingDefine offset 0xffffffff size 0x8
  static constexpr ::ConstString k_VerboseLoggingDefine{ u"ENABLE_UNITY_VIVOX_VERBOSE_LOGGING" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxLogger, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxLogger);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxLogger*, "Unity.Services.Vivox", "VivoxLogger");
