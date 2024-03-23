#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMultipartFormSection)
// Forward declare root types
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::IMultipartFormSection);
// Type: UnityEngine.Networking::IMultipartFormSection
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::IMultipartFormSection*
class CORDL_TYPE IMultipartFormSection {
public:
  // Declarations
  __declspec(property(get = get_contentType))::StringW contentType;

  __declspec(property(get = get_fileName))::StringW fileName;

  __declspec(property(get = get_sectionData))::ArrayW<uint8_t, ::Array<uint8_t>*> sectionData;

  __declspec(property(get = get_sectionName))::StringW sectionName;

  /// @brief Method get_contentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_contentType();

  /// @brief Method get_fileName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_fileName();

  /// @brief Method get_sectionData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_sectionData();

  /// @brief Method get_sectionName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_sectionName();

  // Ctor Parameters [CppParam { name: "", ty: "IMultipartFormSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMultipartFormSection(IMultipartFormSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMultipartFormSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMultipartFormSection(IMultipartFormSection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::IMultipartFormSection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::IMultipartFormSection*, "UnityEngine.Networking", "IMultipartFormSection");
