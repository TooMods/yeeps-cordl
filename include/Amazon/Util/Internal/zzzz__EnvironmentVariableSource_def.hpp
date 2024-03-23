#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableSource)
namespace Amazon::Util::Internal {
class IEnvironmentVariableRetriever;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class EnvironmentVariableSource;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::EnvironmentVariableSource);
// Type: Amazon.Util.Internal::EnvironmentVariableSource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::EnvironmentVariableSource*
class CORDL_TYPE EnvironmentVariableSource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EnvironmentVariableRetriever, put = set_EnvironmentVariableRetriever))::Amazon::Util::Internal::IEnvironmentVariableRetriever* EnvironmentVariableRetriever;

  /// @brief Field <EnvironmentVariableRetriever>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__EnvironmentVariableRetriever_k__BackingField,
                      put = __cordl_internal_set__EnvironmentVariableRetriever_k__BackingField))::Amazon::Util::Internal::IEnvironmentVariableRetriever* _EnvironmentVariableRetriever_k__BackingField;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::Amazon::Util::Internal::EnvironmentVariableSource* instance;

  static inline ::Amazon::Util::Internal::EnvironmentVariableSource* New_ctor();

  constexpr ::Amazon::Util::Internal::IEnvironmentVariableRetriever*& __cordl_internal_get__EnvironmentVariableRetriever_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::IEnvironmentVariableRetriever*> const& __cordl_internal_get__EnvironmentVariableRetriever_k__BackingField() const;

  constexpr void __cordl_internal_set__EnvironmentVariableRetriever_k__BackingField(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value);

  /// @brief Method .ctor, addr 0x2210f94, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Util::Internal::EnvironmentVariableSource* getStaticF_instance();

  /// @brief Method get_EnvironmentVariableRetriever, addr 0x221105c, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::Internal::IEnvironmentVariableRetriever* get_EnvironmentVariableRetriever();

  /// @brief Method get_Instance, addr 0x221106c, size 0x58, virtual false, abstract: false, final false
  static inline ::Amazon::Util::Internal::EnvironmentVariableSource* get_Instance();

  static inline void setStaticF_instance(::Amazon::Util::Internal::EnvironmentVariableSource* value);

  /// @brief Method set_EnvironmentVariableRetriever, addr 0x2211064, size 0x8, virtual false, abstract: false, final false
  inline void set_EnvironmentVariableRetriever(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariableSource(EnvironmentVariableSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariableSource(EnvironmentVariableSource const&) = delete;

  /// @brief Field <EnvironmentVariableRetriever>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::IEnvironmentVariableRetriever* ____EnvironmentVariableRetriever_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::EnvironmentVariableSource, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::EnvironmentVariableSource, ____EnvironmentVariableRetriever_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::EnvironmentVariableSource);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::EnvironmentVariableSource*, "Amazon.Util.Internal", "EnvironmentVariableSource");
