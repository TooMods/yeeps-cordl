#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ToxModVivoxHelper)
namespace GlobalNamespace {
class ToxModInstance;
}
namespace GlobalNamespace {
struct __tox__TOX_TRIAGE_SETTING;
}
// Forward declare root types
namespace GlobalNamespace {
class ToxModVivoxHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ToxModVivoxHelper);
// Type: ::ToxModVivoxHelper
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ToxModVivoxHelper*
class CORDL_TYPE ToxModVivoxHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field tox_mod_instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tox_mod_instance, put = __cordl_internal_set_tox_mod_instance))::GlobalNamespace::ToxModInstance* tox_mod_instance;

  /// @brief Method Finalize, addr 0xf2b55c, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method JoinSession, addr 0xf2b760, size 0x14, virtual false, abstract: false, final false
  inline void JoinSession(::StringW session_name);

  /// @brief Method LeaveSession, addr 0xf2b774, size 0x70, virtual false, abstract: false, final false
  inline void LeaveSession();

  static inline ::GlobalNamespace::ToxModVivoxHelper* New_ctor();

  /// @brief Method Start, addr 0xf2b624, size 0x13c, virtual false, abstract: false, final false
  inline void Start(::StringW account_uuid, ::StringW api_key, ::StringW player_name, ::GlobalNamespace::__tox__TOX_TRIAGE_SETTING triage_level, bool verbose, ::StringW environment,
                    bool enableProximityChat);

  /// @brief Method Stop, addr 0xf2b600, size 0x24, virtual false, abstract: false, final false
  inline void Stop();

  constexpr ::GlobalNamespace::ToxModInstance*& __cordl_internal_get_tox_mod_instance();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ToxModInstance*> const& __cordl_internal_get_tox_mod_instance() const;

  constexpr void __cordl_internal_set_tox_mod_instance(::GlobalNamespace::ToxModInstance* value);

  /// @brief Method .ctor, addr 0xf2b554, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_audio, addr 0xf2b7e4, size 0x14, virtual false, abstract: false, final false
  inline void add_audio(::ArrayW<float_t, ::Array<float_t>*> data, int32_t sample_rate, int32_t channels);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ToxModVivoxHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ToxModVivoxHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ToxModVivoxHelper(ToxModVivoxHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ToxModVivoxHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ToxModVivoxHelper(ToxModVivoxHelper const&) = delete;

  /// @brief Field tox_mod_instance, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::ToxModInstance* ___tox_mod_instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ToxModVivoxHelper, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ToxModVivoxHelper, ___tox_mod_instance) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ToxModVivoxHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ToxModVivoxHelper*, "", "ToxModVivoxHelper");
