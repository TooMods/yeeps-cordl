#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EngineStateHelper)
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Scheduler {
class EngineStateHelper;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper);
// Type: Unity.Services.Vivox.Mint.Scheduler::EngineStateHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Scheduler {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Scheduler::EngineStateHelper*
class CORDL_TYPE EngineStateHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsPlaying, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsPlaying, put = setStaticF_IsPlaying)) bool IsPlaying;

  /// @brief Method Init, addr 0x17013d8, size 0x54, virtual false, abstract: false, final false
  static inline void Init();

  static inline bool getStaticF_IsPlaying();

  static inline void setStaticF_IsPlaying(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EngineStateHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EngineStateHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EngineStateHelper(EngineStateHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EngineStateHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EngineStateHelper(EngineStateHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox::Mint::Scheduler
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Scheduler::EngineStateHelper*, "Unity.Services.Vivox.Mint.Scheduler", "EngineStateHelper");
