#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__CollectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
inline void Unity::XR::CoreUtils::CollectionExtensions::setStaticF_k_String(::System::Text::StringBuilder* value) {
  ::cordl_internals::setStaticField<::System::Text::StringBuilder*, "k_String", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CollectionExtensions*>::get>(
      std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* Unity::XR::CoreUtils::CollectionExtensions::getStaticF_k_String() {
  return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "k_String", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CollectionExtensions*>::get>();
}
template <typename T> inline ::StringW Unity::XR::CoreUtils::CollectionExtensions::Stringify(::System::Collections::Generic::ICollection_1<T>* collection) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::CollectionExtensions*>::get(), "Stringify",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, collection);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::CollectionExtensions::CollectionExtensions() {}
