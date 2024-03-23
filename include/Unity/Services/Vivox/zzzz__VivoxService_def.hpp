#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VivoxService)
namespace Unity::Services::Vivox {
class IVivoxService;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class VivoxService;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::VivoxService);
// Type: Unity.Services.Vivox::VivoxService
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::VivoxService*
class CORDL_TYPE VivoxService : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField))::Unity::Services::Vivox::IVivoxService* _Instance_k__BackingField;

  static inline ::Unity::Services::Vivox::IVivoxService* getStaticF__Instance_k__BackingField();

  /// @brief Method get_Instance, addr 0x1c19330, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Services::Vivox::IVivoxService* get_Instance();

  static inline void setStaticF__Instance_k__BackingField(::Unity::Services::Vivox::IVivoxService* value);

  /// @brief Method set_Instance, addr 0x1c19378, size 0x4c, virtual false, abstract: false, final false
  static inline void set_Instance(::Unity::Services::Vivox::IVivoxService* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VivoxService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VivoxService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VivoxService(VivoxService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VivoxService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VivoxService(VivoxService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::VivoxService, 0x10>, "Size mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::VivoxService);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::VivoxService*, "Unity.Services.Vivox", "VivoxService");
